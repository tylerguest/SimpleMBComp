/*
  ==============================================================================

    UtilityComponents.h
    Created: 6 Jan 2024 3:43:05pm
    Author:  oktylerguest

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();

    void paint(juce::Graphics& g) override;
    
    juce::Colour customColor;
};

struct RotarySlider : juce::Slider
{
    RotarySlider();
};

