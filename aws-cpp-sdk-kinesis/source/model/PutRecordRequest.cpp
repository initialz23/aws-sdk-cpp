/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/PutRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRecordRequest::PutRecordRequest() : 
    m_streamNameHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_partitionKeyHasBeenSet(false),
    m_explicitHashKeyHasBeenSet(false),
    m_sequenceNumberForOrderingHasBeenSet(false)
{
}

Aws::String PutRecordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", HashingUtils::Base64Encode(m_data));
  }

  if(m_partitionKeyHasBeenSet)
  {
   payload.WithString("PartitionKey", m_partitionKey);

  }

  if(m_explicitHashKeyHasBeenSet)
  {
   payload.WithString("ExplicitHashKey", m_explicitHashKey);

  }

  if(m_sequenceNumberForOrderingHasBeenSet)
  {
   payload.WithString("SequenceNumberForOrdering", m_sequenceNumberForOrdering);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRecordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.PutRecord"));
  return headers;

}




