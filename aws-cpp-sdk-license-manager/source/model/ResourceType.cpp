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

#include <aws/license-manager/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int EC2_INSTANCE_HASH = HashingUtils::HashString("EC2_INSTANCE");
        static const int EC2_HOST_HASH = HashingUtils::HashString("EC2_HOST");
        static const int EC2_AMI_HASH = HashingUtils::HashString("EC2_AMI");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_INSTANCE_HASH)
          {
            return ResourceType::EC2_INSTANCE;
          }
          else if (hashCode == EC2_HOST_HASH)
          {
            return ResourceType::EC2_HOST;
          }
          else if (hashCode == EC2_AMI_HASH)
          {
            return ResourceType::EC2_AMI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::EC2_INSTANCE:
            return "EC2_INSTANCE";
          case ResourceType::EC2_HOST:
            return "EC2_HOST";
          case ResourceType::EC2_AMI:
            return "EC2_AMI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
