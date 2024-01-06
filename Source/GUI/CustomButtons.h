/*
  ==============================================================================

    CustomButtons.h
    Created: 2 Jan 2024 10:37:11am
    Author:  oktylerguest

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct PowerButton : juce::ToggleButton { };

struct AnalyzerButton : juce::ToggleButton
{
    void resized() override;

    juce::Path randomPath;
};