//
// Created by svf on 9/24/20.
//

#ifndef C3PTEMPLATE_CONCRETEPLUGIN_H
#define C3PTEMPLATE_CONCRETEPLUGIN_H

#include "plugin.h"

// The concrete plugin class, you can change the class name as you like.
// But you must make sure the override methods be implemented, and regist this class as a plugin.
class ConcretePlugin : public AbstractPlugin {
public:
    ConcretePlugin() = default;
    ~ConcretePlugin() override = default;

    bool start(const char*) override;

    bool stop() override;

    double progress() override;
};

// Registing this class as a plugin.
PLUGIN(ConcretePlugin, "ConcretePlugin", "0.1")

#endif //C3PTEMPLATE_CONCRETEPLUGIN_H
