
#include "Test_Project_Default_precompiled.h"

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>

#include "Test_Project_DefaultSystemComponent.h"

namespace Test_Project_Default
{
    void Test_Project_DefaultSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<Test_Project_DefaultSystemComponent, AZ::Component>()
                ->Version(0)
                ->SerializerForEmptyClass();

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<Test_Project_DefaultSystemComponent>("Test_Project_Default", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void Test_Project_DefaultSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("Test_Project_DefaultService"));
    }

    void Test_Project_DefaultSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("Test_Project_DefaultService"));
    }

    void Test_Project_DefaultSystemComponent::GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        (void)required;
    }

    void Test_Project_DefaultSystemComponent::GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        (void)dependent;
    }

    void Test_Project_DefaultSystemComponent::Init()
    {
    }

    void Test_Project_DefaultSystemComponent::Activate()
    {
        Test_Project_DefaultRequestBus::Handler::BusConnect();
    }

    void Test_Project_DefaultSystemComponent::Deactivate()
    {
        Test_Project_DefaultRequestBus::Handler::BusDisconnect();
    }
}
