#ifndef BINDING_NL2PARK_INDIVIDUALCOLOR_H
#define BINDING_NL2PARK_INDIVIDUALCOLOR_H

#include <binding/nolimits.h>
#include <lib/NL2Park/Coaster/IndividualColor.h>

namespace Binding {
    namespace NL2Park {
        class IndividualColor : public Nan::ObjectWrap {
        public:
            explicit IndividualColor(Library::NL2Park::IndividualColor *individualColor) : _individualColor(individualColor) {}
            explicit IndividualColor() : _individualColor(new Library::NL2Park::IndividualColor) {}
            ~IndividualColor() {}

            Library::NL2Park::IndividualColor *getIndividualColor() { return _individualColor; }

            static BINDING_MODULE_INIT("IndividualColor",
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(HasIndividualColor);

                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(CarColor);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(SeatColor);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(HarnessColor);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(BogieColor);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(ChassisColor);

                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(CarTexture1);
                BINDING_PROTOTYPE_METHOD_SETTER_GETTER(CarTexture2);
            );

            static BINDING_NEW_INSTANCE();
        private:
            static BINDING_PERSISTENT_CONSTRUCTOR();
            static BINDING_METHOD_NEW_CAST_EXTERNAL(IndividualColor);

            BINDING_METHOD_SETTER_GETTER_BOOLEAN(HasIndividualColor, IndividualColor);

            BINDING_METHOD_SETTER_GETTER_VEC3(CarColor, IndividualColor);
            BINDING_METHOD_SETTER_GETTER_VEC3(SeatColor, IndividualColor);
            BINDING_METHOD_SETTER_GETTER_VEC3(HarnessColor, IndividualColor);
            BINDING_METHOD_SETTER_GETTER_VEC3(BogieColor, IndividualColor);
            BINDING_METHOD_SETTER_GETTER_VEC3(ChassisColor, IndividualColor);

            BINDING_METHOD_SETTER_GETTER_STRING(CarTexture1, IndividualColor);
            BINDING_METHOD_SETTER_GETTER_STRING(CarTexture2, IndividualColor);

            Library::NL2Park::IndividualColor *_individualColor;
        };
    }
}

#endif // BINDING_NL2PARK_INDIVIDUALCOLOR_H