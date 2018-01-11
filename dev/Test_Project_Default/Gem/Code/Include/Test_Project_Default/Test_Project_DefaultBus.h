
#pragma once

#include <AzCore/EBus/EBus.h>

namespace Test_Project_Default
{
    class Test_Project_DefaultRequests
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static const AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static const AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////

        // Put your public methods here
    };
    using Test_Project_DefaultRequestBus = AZ::EBus<Test_Project_DefaultRequests>;
} // namespace Test_Project_Default
