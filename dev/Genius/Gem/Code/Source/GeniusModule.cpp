
#include "Genius_precompiled.h"
#include <platform_impl.h>

#include <AzCore/Memory/SystemAllocator.h>

#include "GeniusSystemComponent.h"

#include <IGem.h>

namespace Genius
{
    class GeniusModule
        : public CryHooksModule
    {
    public:
        AZ_RTTI(GeniusModule, "{28F2D384-0823-4379-B04A-CAFFC9918BBA}", CryHooksModule);
        AZ_CLASS_ALLOCATOR(GeniusModule, AZ::SystemAllocator, 0);

        GeniusModule()
            : CryHooksModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                GeniusSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<GeniusSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(Genius_d97c90444b7449aba01dd812a3e6e126, Genius::GeniusModule)
