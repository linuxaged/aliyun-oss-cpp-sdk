/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <string>
#include <alibabacloud/oss/Export.h>
#include <alibabacloud/oss/OssResult.h>
#include <alibabacloud/oss/ServiceRequest.h>

namespace AlibabaCloud
{
namespace OSS
{
    class ALIBABACLOUD_OSS_EXPORT AppendObjectResult : public OssObjectResult
    {
    public:
       public:
        AppendObjectResult();
        AppendObjectResult(const HeaderCollection& header);
        uint64_t Length() const { return length_ ; }
        uint64_t CRC64() const { return crc64_ ; }
     private:
        uint64_t length_;
        uint64_t crc64_;
    };
} 
}

