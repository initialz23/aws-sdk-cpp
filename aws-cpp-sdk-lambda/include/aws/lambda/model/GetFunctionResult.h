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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/FunctionConfiguration.h>
#include <aws/lambda/model/FunctionCodeLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lambda/model/Concurrency.h>
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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API GetFunctionResult
  {
  public:
    GetFunctionResult();
    GetFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration of the function or version.</p>
     */
    inline const FunctionConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration of the function or version.</p>
     */
    inline void SetConfiguration(const FunctionConfiguration& value) { m_configuration = value; }

    /**
     * <p>The configuration of the function or version.</p>
     */
    inline void SetConfiguration(FunctionConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The configuration of the function or version.</p>
     */
    inline GetFunctionResult& WithConfiguration(const FunctionConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration of the function or version.</p>
     */
    inline GetFunctionResult& WithConfiguration(FunctionConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The deployment package of the function or version.</p>
     */
    inline const FunctionCodeLocation& GetCode() const{ return m_code; }

    /**
     * <p>The deployment package of the function or version.</p>
     */
    inline void SetCode(const FunctionCodeLocation& value) { m_code = value; }

    /**
     * <p>The deployment package of the function or version.</p>
     */
    inline void SetCode(FunctionCodeLocation&& value) { m_code = std::move(value); }

    /**
     * <p>The deployment package of the function or version.</p>
     */
    inline GetFunctionResult& WithCode(const FunctionCodeLocation& value) { SetCode(value); return *this;}

    /**
     * <p>The deployment package of the function or version.</p>
     */
    inline GetFunctionResult& WithCode(FunctionCodeLocation&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.</p>
     */
    inline GetFunctionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">reserved
     * concurrency</a>.</p>
     */
    inline const Concurrency& GetConcurrency() const{ return m_concurrency; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">reserved
     * concurrency</a>.</p>
     */
    inline void SetConcurrency(const Concurrency& value) { m_concurrency = value; }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">reserved
     * concurrency</a>.</p>
     */
    inline void SetConcurrency(Concurrency&& value) { m_concurrency = std::move(value); }

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">reserved
     * concurrency</a>.</p>
     */
    inline GetFunctionResult& WithConcurrency(const Concurrency& value) { SetConcurrency(value); return *this;}

    /**
     * <p>The function's <a
     * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">reserved
     * concurrency</a>.</p>
     */
    inline GetFunctionResult& WithConcurrency(Concurrency&& value) { SetConcurrency(std::move(value)); return *this;}

  private:

    FunctionConfiguration m_configuration;

    FunctionCodeLocation m_code;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Concurrency m_concurrency;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
