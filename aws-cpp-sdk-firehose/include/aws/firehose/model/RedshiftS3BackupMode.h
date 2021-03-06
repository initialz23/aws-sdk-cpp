/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class RedshiftS3BackupMode
  {
    NOT_SET,
    Disabled,
    Enabled
  };

namespace RedshiftS3BackupModeMapper
{
AWS_FIREHOSE_API RedshiftS3BackupMode GetRedshiftS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForRedshiftS3BackupMode(RedshiftS3BackupMode value);
} // namespace RedshiftS3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
