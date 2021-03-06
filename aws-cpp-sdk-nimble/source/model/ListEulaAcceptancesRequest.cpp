/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListEulaAcceptancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListEulaAcceptancesRequest::ListEulaAcceptancesRequest() : 
    m_eulaIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String ListEulaAcceptancesRequest::SerializePayload() const
{
  return {};
}

void ListEulaAcceptancesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_eulaIdsHasBeenSet)
    {
      for(const auto& item : m_eulaIds)
      {
        ss << item;
        uri.AddQueryStringParameter("eulaIds", ss.str());
        ss.str("");
      }
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



