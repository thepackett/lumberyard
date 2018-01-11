
#pragma once

#include <AzCore/Component/Component.h>

#include <Test_Project_Default/Test_Project_DefaultBus.h>

namespace Test_Project_Default
{
    class Test_Project_DefaultSystemComponent
        : public AZ::Component
        , protected Test_Project_DefaultRequestBus::Handler
    {
    public:
        AZ_COMPONENT(Test_Project_DefaultSystemComponent, "{756558E3-C340-49DF-A623-B643C76FA8FF}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // Test_Project_DefaultRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
