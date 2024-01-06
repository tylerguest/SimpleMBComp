/*
  ==============================================================================

    UtilityComponents.cpp
    Created: 6 Jan 2024 3:43:05pm
    Author:  oktylerguest

  ==============================================================================
*/

#include "UtilityComponents.h"

Placeholder::Placeholder()
{
    juce::Random r;
    customColor = juce::Colour(r.nextInt(255),
        r.nextInt(255), r.nextInt(255));
}

void Placeholder::paint(juce::Graphics& g)
{
    g.fillAll(customColor);
}
//==================================================================================

RotarySlider::RotarySlider() :
    juce::Slider(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag,
        juce::Slider::TextEntryBoxPosition::NoTextBox)
{ }
