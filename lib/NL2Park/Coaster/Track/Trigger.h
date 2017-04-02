#ifndef LIB_NL2PARK_TRIGGER_H
#define LIB_NL2PARK_TRIGGER_H

#include <Stream/NoLimitsStream.h>

namespace Library {
    namespace NL2Park {
        class Trigger : public Stream::NoLimitsStream {
        public:
            enum TrainEvent {
                None,
                UnlockSpinning,
                LockSpinning,
                UnlockSwinging,
                LockSwinging
            };

            Trigger() {}
            void read();

            double getPosition() const;
            void setPosition(double value);

            std::string getName() const;
            void setName(const std::string &value);

            TrainEvent getTrainEvent() const;
            void setTrainEvent(const TrainEvent &value);

        private:
            double position;
            std::string name;
            TrainEvent trainEvent;
        };
    }
}

#endif // LIB_NL2PARK_TRIGGER_H
