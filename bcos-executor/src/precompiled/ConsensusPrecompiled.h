/**
 *  Copyright (C) 2021 FISCO BCOS.
 *  SPDX-License-Identifier: Apache-2.0
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 * @file ConsensusPrecompiled.h
 * @author: kyonRay
 * @date 2021-05-26
 */

#pragma once
#include "../executive/BlockContext.h"
#include "../vm/Precompiled.h"

namespace bcos::precompiled
{
class ConsensusPrecompiled : public bcos::precompiled::Precompiled
{
public:
    using Ptr = std::shared_ptr<ConsensusPrecompiled>;
    ConsensusPrecompiled(const ConsensusPrecompiled&) = default;
    ConsensusPrecompiled(ConsensusPrecompiled&&) = default;
    ConsensusPrecompiled& operator=(const ConsensusPrecompiled&) = default;
    ConsensusPrecompiled& operator=(ConsensusPrecompiled&&) = default;

    explicit ConsensusPrecompiled(crypto::Hash::Ptr _hashImpl);
    ~ConsensusPrecompiled() override = default;

    std::shared_ptr<PrecompiledExecResult> call(
        std::shared_ptr<executor::TransactionExecutive> _executive,
        PrecompiledExecResult::Ptr _callParameters) override;
};
}  // namespace bcos::precompiled
