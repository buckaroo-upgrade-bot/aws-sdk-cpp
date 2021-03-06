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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class DeviceFilterOperator
  {
    NOT_SET,
    EQUALS,
    LESS_THAN,
    LESS_THAN_OR_EQUALS,
    GREATER_THAN,
    GREATER_THAN_OR_EQUALS,
    IN,
    NOT_IN,
    CONTAINS
  };

namespace DeviceFilterOperatorMapper
{
AWS_DEVICEFARM_API DeviceFilterOperator GetDeviceFilterOperatorForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDeviceFilterOperator(DeviceFilterOperator value);
} // namespace DeviceFilterOperatorMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
