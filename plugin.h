//
// Created by svf on 9/24/20.
//

#ifndef C3PTEMPLATE_PLUGIN_H
#define C3PTEMPLATE_PLUGIN_H

#include "abstract_plugin.h"

typedef AbstractPlugin* (*CreatePluginFunc)();

struct Plugin {
    const char* mPluginName;
    const char* mPluginVersion;
    CreatePluginFunc mCreateFunc;
};

#define PLUGIN(classType, pluginName, pluginVersion) \
    extern "C" {                                     \
        AbstractPlugin* createPlugin() {             \
            return new classType();                  \
        }                                            \
        Plugin exports = {                           \
            pluginName,                              \
            pluginVersion,                           \
            createPlugin,                            \
        };                                           \
    }

#endif //C3PTEMPLATE_PLUGIN_H
