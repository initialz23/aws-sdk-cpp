/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/DeleteHapgRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHapgRequest::DeleteHapgRequest() : 
    m_hapgArnHasBeenSet(false)
{
}

Aws::String DeleteHapgRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hapgArnHasBeenSet)
  {
   payload.WithString("HapgArn", m_hapgArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteHapgRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.DeleteHapg"));
  return headers;

}




