#ifndef BINDING_NL2PARK_LAYER_H
#define BINDING_NL2PARK_LAYER_H

#include <binding/nolimits.h>
#include "AutoPaint.h"
#include "BaseMap.h"
#include "DetailMap.h"
#include "BumpMap.h"
#include "Extras.h"

#include <lib/NL2Park/Terrain/Layer.h>

namespace Binding {
    namespace NL2Park {
        class Layer : public Nan::ObjectWrap {
        public:
            explicit Layer() : _layer(new Library::NL2Park::Layer) {}
            explicit Layer(Library::NL2Park::Layer *layer) : _layer(layer) {}

            ~Layer() {}

            Library::NL2Park::Layer *getLayer() { return _layer; }

            static BINDING_MODULE_INIT("Layer",
                BINDING_PROTOTYPE_METHOD_GETTER(Name);
                BINDING_PROTOTYPE_METHOD_GETTER(AutoPaint);
                BINDING_PROTOTYPE_METHOD_GETTER(BaseMap);
                BINDING_PROTOTYPE_METHOD_GETTER(DetailMap);
                BINDING_PROTOTYPE_METHOD_GETTER(BumpMap);
                BINDING_PROTOTYPE_METHOD_GETTER(Extras);
            );

            static BINDING_NEW_INSTANCE();
        private:

            static BINDING_PERSISTENT_CONSTRUCTOR();
            static BINDING_METHOD_NEW_CAST_EXTERNAL(Layer);

            BINDING_METHOD_SETTER_GETTER_STRING(Name, Layer);
            BINDING_METHOD_SETTER_GETTER_OBJECT(AutoPaint, Layer);
            BINDING_METHOD_SETTER_GETTER_OBJECT(BaseMap, Layer);
            BINDING_METHOD_SETTER_GETTER_OBJECT(DetailMap, Layer);
            BINDING_METHOD_SETTER_GETTER_OBJECT(BumpMap, Layer);
            BINDING_METHOD_SETTER_GETTER_OBJECT(Extras, Layer);

            Library::NL2Park::Layer *_layer;
        };
    }
}

#endif // BINDING_NL2PARK_LAYER_H
