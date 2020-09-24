//
// Created by svf on 9/24/20.
//

#include "ConcretePlugin.h"

bool ConcretePlugin::start(const char* path) {
    // 1. Read in ini file and read in paras.

    // 2. Run algorithm

    // 3. Return value, if true then finished successfully, otherwise failed.
    return false;
}

bool ConcretePlugin::stop() {
    // If you cannot stop current running algorithm, then just return false.
    // But if you can stop it and ensure that you can make the stop TRULY safe, then return true.
    return false;
}

double ConcretePlugin::progress() {
    // For progress we defined a double in 0.0~1.0 means progressing , and over 1.0 means finished.
    // When calling this func, make sure to return a value fitting requests.
    return 0;
}
