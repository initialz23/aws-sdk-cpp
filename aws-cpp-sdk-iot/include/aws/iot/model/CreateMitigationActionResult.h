﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class AWS_IOT_API CreateMitigationActionResult
  {
  public:
    CreateMitigationActionResult();
    CreateMitigationActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMitigationActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }

    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline void SetActionArn(const Aws::String& value) { m_actionArn = value; }

    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline void SetActionArn(Aws::String&& value) { m_actionArn = std::move(value); }

    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline void SetActionArn(const char* value) { m_actionArn.assign(value); }

    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline CreateMitigationActionResult& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}

    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline CreateMitigationActionResult& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the new mitigation action.</p>
     */
    inline CreateMitigationActionResult& WithActionArn(const char* value) { SetActionArn(value); return *this;}


    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionId = value; }

    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionId = std::move(value); }

    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline void SetActionId(const char* value) { m_actionId.assign(value); }

    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline CreateMitigationActionResult& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline CreateMitigationActionResult& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the new mitigation action.</p>
     */
    inline CreateMitigationActionResult& WithActionId(const char* value) { SetActionId(value); return *this;}

  private:

    Aws::String m_actionArn;

    Aws::String m_actionId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
