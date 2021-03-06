/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/UnsubscribeFromDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnsubscribeFromDatasetRequest::UnsubscribeFromDatasetRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

Aws::String UnsubscribeFromDatasetRequest::SerializePayload() const
{
  return {};
}




