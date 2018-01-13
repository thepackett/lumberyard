
#pragma once

#include <AzCore/Component/Component.h>

#include <Genius/GeniusBus.h>

namespace Genius
{
    class GeniusSystemComponent
        : public AZ::Component
        , protected GeniusRequestBus::Handler
    {
    public:
        AZ_COMPONENT(GeniusSystemComponent, "{95AB2EF2-ECB0-496A-B187-438FC9DAF290}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // GeniusRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
