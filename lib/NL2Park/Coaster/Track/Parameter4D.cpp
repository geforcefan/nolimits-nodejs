#include "Parameter4D.h"

namespace Library {
    namespace NL2Park {
        void Parameter4D::read() {
            setPosition(readDouble());
            setAngle(readDouble());

            readNull(16);
        }

        double Parameter4D::getPosition() const {
            return position;
        }

        void Parameter4D::setPosition(double value) {
            position = value;
        }

        double Parameter4D::getAngle() const {
            return angle;
        }

        void Parameter4D::setAngle(double value) {
            angle = value;
        }
    }
}