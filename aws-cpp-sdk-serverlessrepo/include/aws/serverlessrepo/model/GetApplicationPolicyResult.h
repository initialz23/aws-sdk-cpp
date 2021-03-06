/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API GetApplicationPolicyResult
  {
  public:
    GetApplicationPolicyResult();
    GetApplicationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApplicationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline const Aws::Vector<ApplicationPolicyStatement>& GetStatements() const{ return m_statements; }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline void SetStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { m_statements = value; }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline void SetStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { m_statements = std::move(value); }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline GetApplicationPolicyResult& WithStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { SetStatements(value); return *this;}

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline GetApplicationPolicyResult& WithStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { SetStatements(std::move(value)); return *this;}

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline GetApplicationPolicyResult& AddStatements(const ApplicationPolicyStatement& value) { m_statements.push_back(value); return *this; }

    /**
     * <p>An array of policy statements applied to the application.</p>
     */
    inline GetApplicationPolicyResult& AddStatements(ApplicationPolicyStatement&& value) { m_statements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ApplicationPolicyStatement> m_statements;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
