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
#include <aws/iot/model/DeviceCertificateUpdateAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Parameters to define a mitigation action that changes the state of the device
   * certificate to inactive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDeviceCertificateParams">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API UpdateDeviceCertificateParams
  {
  public:
    UpdateDeviceCertificateParams();
    UpdateDeviceCertificateParams(Aws::Utils::Json::JsonView jsonValue);
    UpdateDeviceCertificateParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that you want to apply to the device cerrtificate. The only
     * supported value is <code>DEACTIVATE</code>.</p>
     */
    inline const DeviceCertificateUpdateAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that you want to apply to the device cerrtificate. The only
     * supported value is <code>DEACTIVATE</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that you want to apply to the device cerrtificate. The only
     * supported value is <code>DEACTIVATE</code>.</p>
     */
    inline void SetAction(const DeviceCertificateUpdateAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that you want to apply to the device cerrtificate. The only
     * supported value is <code>DEACTIVATE</code>.</p>
     */
    inline void SetAction(DeviceCertificateUpdateAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that you want to apply to the device cerrtificate. The only
     * supported value is <code>DEACTIVATE</code>.</p>
     */
    inline UpdateDeviceCertificateParams& WithAction(const DeviceCertificateUpdateAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that you want to apply to the device cerrtificate. The only
     * supported value is <code>DEACTIVATE</code>.</p>
     */
    inline UpdateDeviceCertificateParams& WithAction(DeviceCertificateUpdateAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    DeviceCertificateUpdateAction m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
