{
    "targets": [
        {
            "target_name": "nolimits",
            "sources": [
                "binding/nolimits.cpp",
                "binding/NL2Park/Coaster/Track/Track.cpp",
                "lib/Stream/NoLimitsStream.cpp",
                "lib/NL2Park/Park.cpp",
                "lib/NL2Park/Info/Info.cpp",
                "lib/NL2Park/Info/Sky.cpp",
                "lib/NL2Park/Info/Weather.cpp",
                "lib/NL2Park/Coaster/Coaster.cpp",
                "lib/NL2Park/Coaster/Colors.cpp",
                "lib/NL2Park/Coaster/Style.cpp",
                "lib/NL2Park/Coaster/Mode.cpp",
                "lib/NL2Park/Coaster/CustomFriction.cpp",
                "lib/NL2Park/Coaster/Track/Track.cpp",
                "lib/NL2Park/Coaster/Track/CustomTrack.cpp",
                "lib/NL2Park/Coaster/Track/Vertex.cpp",
                "lib/NL2Park/Coaster/Track/RollPoint.cpp",
                "lib/NL2Park/Coaster/Track/Trigger.cpp",
                "lib/NL2Park/Coaster/Track/Parameter4D.cpp",
                "lib/NL2Park/Coaster/Track/Support/RailNode.cpp",
                "lib/NL2Park/Coaster/Track/Support/SupportNode.cpp",
                "lib/File/File.cpp",
                "lib/File/BufferFile.cpp",
            ],
            'cflags!': ['-fno-exceptions', '-funwind-tables', '-stdlib=libc++', '-std=c++11'],
            'cflags_cc!': ['-fno-exceptions', '-funwind-tables', '-stdlib=libc++', '-std=c++11'],
            'conditions': [
              ['OS=="mac"', {
                'xcode_settings': {
                  'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
                  'OTHER_CFLAGS': ['-stdlib=libc++', '-std=c++11']
                }
              }]
            ],
            "include_dirs": [
                "<!(node -e \"require('nan')\")",
                "lib",
                "."
            ]
        }
    ]
}
