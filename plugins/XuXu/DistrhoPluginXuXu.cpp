/*
 * DISTRHO XuXu Plugin
 * Copyright (C) 2015 Filipe Coelho <falktx@falktx.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * For a full copy of the GNU General Public License see the LICENSE file.
 */

#include "DistrhoPluginXuXu.hpp"

START_NAMESPACE_DISTRHO

// -----------------------------------------------------------------------

DistrhoPluginXuXu::DistrhoPluginXuXu()
    : Plugin(kParameterCount, 0, 0) // 0 programs, 0 states
{
    // reset
    deactivate();
}

// -----------------------------------------------------------------------
// Init

void DistrhoPluginXuXu::initParameter(uint32_t index, Parameter& /*parameter*/)
{
    switch (index)
    {
    /*
    case param:
        parameter.hints      = kParameterIsAutomable;
        parameter.name       = "";
        parameter.symbol     = "";
        parameter.ranges.def = 0.0f;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        break;
    */
    }
}

void DistrhoPluginXuXu::initState(uint32_t, const char*, String&)
{
}

// -----------------------------------------------------------------------
// Internal data

float DistrhoPluginXuXu::getParameterValue(uint32_t index) const
{
    switch (index)
    {
    /*
    case param:
        return fParam;
    */
    default:
        return 0.0f;
    }
}

void DistrhoPluginXuXu::setParameterValue(uint32_t index, float /*value*/)
{
    switch (index)
    {
    /*case param:
        fParam = value;
    */
    }
}

void DistrhoPluginXuXu::setState(const char*, const char*)
{
}

// -----------------------------------------------------------------------
// Process

void DistrhoPluginXuXu::activate()
{
}

void DistrhoPluginXuXu::deactivate()
{
}

void DistrhoPluginXuXu::run(const float**, float** outputs, uint32_t frames, const MidiEvent*, uint32_t)
{
    float* const out1 = outputs[0];
    float* const out2 = outputs[1];

    std::memset(out1, 0, sizeof(float)*frames);
    std::memset(out2, 0, sizeof(float)*frames);
}

// -----------------------------------------------------------------------

Plugin* createPlugin()
{
    return new DistrhoPluginXuXu();
}

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO
