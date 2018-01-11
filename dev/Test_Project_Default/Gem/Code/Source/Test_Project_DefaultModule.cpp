
#include "Test_Project_Default_precompiled.h"
#include <platform_impl.h>

#include <AzCore/Memory/SystemAllocator.h>

#include "Test_Project_DefaultSystemComponent.h"

#include <IGem.h>

namespace Test_Project_Default
{
    class Test_Project_DefaultModule
        : public CryHooksModule
    {
    public:
        AZ_RTTI(Test_Project_DefaultModule, "{9633200D-4009-41C9-9AD2-27ABE3F813E3}", CryHooksModule);
        AZ_CLASS_ALLOCATOR(Test_Project_DefaultModule, AZ::SystemAllocator, 0);

        Test_Project_DefaultModule()
            : CryHooksModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                Test_Project_DefaultSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<Test_Project_DefaultSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(Test_Project_Default_298c7b14afa3489290ee69a94da57780, Test_Project_Default::Test_Project_DefaultModule)
