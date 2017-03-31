#include <NL2Park/Park.h>
#include <iostream>


namespace Library {
    namespace NL2Park {
        Park::Park() {
            info = new Info();
        }

        void Park::read() {
            for(int i=0; i <= getFileSize(); i++) {
                setStreamPosition(i);

                std::string chunk = readChunkName();

                if(chunk == "INFO") {
                    getInfo()->readChunk(getChunkBufferFile());
                    i = getStreamPosition() - 1;
                }

                if(chunk == "COAS") {
                    Coaster *_coaster = new Coaster();
                    insertCoaster(_coaster);

                    _coaster->readChunk(getChunkBufferFile());
                    i = getStreamPosition() - 1;
                }

                // @TODO: Implement terrain
                if(chunk == "TERC") {
                    getChunkBufferFile();
                    i = getStreamPosition() - 1;
                }

                // @TODO: Implement scenery
                if(chunk == "SCEN") {
                    getChunkBufferFile();
                    i = getStreamPosition() - 1;
                }

                // @TODO: Implement uspk
                if(chunk == "USPK") {
                    getChunkBufferFile();
                    i = getStreamPosition() - 1;
                }
            }
        }

        Info *Park::getInfo() const {
            return info;
        }

        std::vector<Coaster*> Park::getCoaster() const {
            return coaster;
        }

        void Park::insertCoaster(Coaster* value) {
            coaster.push_back(value);
        }
    }
}
