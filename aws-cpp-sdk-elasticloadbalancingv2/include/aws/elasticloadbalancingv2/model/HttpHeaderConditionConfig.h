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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  class AWS_ELASTICLOADBALANCINGV2_API HttpHeaderConditionConfig
  {
  public:
    HttpHeaderConditionConfig();
    HttpHeaderConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    HttpHeaderConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetHttpHeaderName() const{ return m_httpHeaderName; }

    
    inline void SetHttpHeaderName(const Aws::String& value) { m_httpHeaderNameHasBeenSet = true; m_httpHeaderName = value; }

    
    inline void SetHttpHeaderName(Aws::String&& value) { m_httpHeaderNameHasBeenSet = true; m_httpHeaderName = std::move(value); }

    
    inline void SetHttpHeaderName(const char* value) { m_httpHeaderNameHasBeenSet = true; m_httpHeaderName.assign(value); }

    
    inline HttpHeaderConditionConfig& WithHttpHeaderName(const Aws::String& value) { SetHttpHeaderName(value); return *this;}

    
    inline HttpHeaderConditionConfig& WithHttpHeaderName(Aws::String&& value) { SetHttpHeaderName(std::move(value)); return *this;}

    
    inline HttpHeaderConditionConfig& WithHttpHeaderName(const char* value) { SetHttpHeaderName(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    
    inline HttpHeaderConditionConfig& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    
    inline HttpHeaderConditionConfig& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    
    inline HttpHeaderConditionConfig& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    
    inline HttpHeaderConditionConfig& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    
    inline HttpHeaderConditionConfig& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_httpHeaderName;
    bool m_httpHeaderNameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
