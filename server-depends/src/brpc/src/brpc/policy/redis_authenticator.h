// Copyright (c) 2017 Baidu, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author(s): Feng Yan <yanfeng@qiyi.com>

#ifndef BRPC_POLICY_REDIS_AUTHENTICATOR_H
#define BRPC_POLICY_REDIS_AUTHENTICATOR_H

#include "brpc/authenticator.h"

namespace brpc {
namespace policy {

// Request to redis for authentication.
class RedisAuthenticator : public Authenticator {
public:
    RedisAuthenticator(const std::string& passwd)
        : passwd_(passwd) {}

    int GenerateCredential(std::string* auth_str) const;

    int VerifyCredential(const std::string&, const butil::EndPoint&,
                         brpc::AuthContext*) const {
        return 0;
    }

private:
    const std::string passwd_;
};

}  // namespace policy
}  // namespace brpc

#endif  // BRPC_POLICY_COUCHBASE_AUTHENTICATOR_H
