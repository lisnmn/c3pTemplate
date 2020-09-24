//
// Created by svf on 9/24/20.
//

#ifndef C3PTEMPLATE_ABSTRACT_PLUGIN_H
#define C3PTEMPLATE_ABSTRACT_PLUGIN_H

// Abstract Class for general plugin.
class AbstractPlugin {
public:
    AbstractPlugin() = default;
    virtual ~AbstractPlugin() = default;
    virtual bool start(const char*) = 0;
    virtual bool stop() = 0;
    virtual double progress() = 0;
};

#endif //C3PTEMPLATE_ABSTRACT_PLUGIN_H
