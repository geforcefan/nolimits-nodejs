#ifndef BINDING_NL2PARK_WATER_H
#define BINDING_NL2PARK_WATER_H

#include <binding/nolimits.h>
#include <lib/NL2Park/Terrain/Water.h>

namespace Binding {
    namespace NL2Park {
        class Water : public Nan::ObjectWrap {
        public:
            explicit Water() : _water(new Library::NL2Park::Water) {}
            explicit Water(Library::NL2Park::Water *water) : _water(water) {}

            ~Water() {}

            Library::NL2Park::Water *getWater() { return _water; }

            static BINDING_MODULE_INIT("Water",
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(Density);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(DiffuseTexture);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(DiffuseTextureRepeatsPerDistance);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(BumpMapTexture);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(BumpMapRepeatsPerDistance);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(BumpMapType);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(BumpMapHeightMapScale);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(Reflection);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(Waves);
            );

            static BINDING_NEW_INSTANCE();
        private:

            static BINDING_PERSISTENT_CONSTRUCTOR();
            static BINDING_METHOD_NEW_CAST_EXTERNAL(Water);

            BINDING_METHOD_SETTER_GETTER_FLOAT(Density, Water);
            BINDING_METHOD_SETTER_GETTER_STRING(DiffuseTexture, Water);
            BINDING_METHOD_SETTER_GETTER_FLOAT(DiffuseTextureRepeatsPerDistance, Water);
            BINDING_METHOD_SETTER_GETTER_STRING(BumpMapTexture, Water);
            BINDING_METHOD_SETTER_GETTER_FLOAT(BumpMapRepeatsPerDistance, Water);
            BINDING_METHOD_SETTER_GETTER_ENUM(BumpMapType, Water, Library::NL2Park::TerrainMap);
            BINDING_METHOD_SETTER_GETTER_FLOAT(BumpMapHeightMapScale, Water);
            BINDING_METHOD_SETTER_GETTER_FLOAT(Reflection, Water);
            BINDING_METHOD_SETTER_GETTER_FLOAT(Waves, Water);

            Library::NL2Park::Water *_water;
        };
    }
}

#endif // BINDING_NL2PARK_WATER_H
