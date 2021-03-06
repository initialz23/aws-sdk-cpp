/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class ResourceShareType
  {
    NOT_SET,
    FOREIGN,
    ALL
  };

namespace ResourceShareTypeMapper
{
AWS_LAKEFORMATION_API ResourceShareType GetResourceShareTypeForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForResourceShareType(ResourceShareType value);
} // namespace ResourceShareTypeMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
