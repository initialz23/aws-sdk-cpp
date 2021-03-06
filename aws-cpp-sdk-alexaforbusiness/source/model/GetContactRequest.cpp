/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/GetContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetContactRequest::GetContactRequest() : 
    m_contactArnHasBeenSet(false)
{
}

Aws::String GetContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("ContactArn", m_contactArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetContactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.GetContact"));
  return headers;

}




