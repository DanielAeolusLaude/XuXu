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
    d_deactivate();
}

// -----------------------------------------------------------------------
// Init

void DistrhoPluginXuXu::d_initParameter(uint32_t index, Parameter& /*parameter*/)
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

void DistrhoPluginXuXu::d_initState(uint32_t, d_string&, d_string&)
{
}

// -----------------------------------------------------------------------
// Internal data

float DistrhoPluginXuXu::d_getParameterValue(uint32_t index) const
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

void DistrhoPluginXuXu::d_setParameterValue(uint32_t index, float /*value*/)
{
    switch (index)
    {
    /*case param:
        fParam = value;
    */
    }
}

void DistrhoPluginXuXu::d_setState(const char*, const char*)
{
}

// -----------------------------------------------------------------------
// Process

void DistrhoPluginXuXu::d_activate()
{
}

void DistrhoPluginXuXu::d_deactivate()
{
}

void DistrhoPluginXuXu::d_run(const float**, float** outputs, uint32_t frames, const MidiEvent*, uint32_t)
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
