/*
  ==============================================================================

    GlobalControls.h
    Created: 6 Jan 2024 4:03:05pm
    Author:  oktylerguest

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include "RotarySliderWithLabels.h"

struct GlobalControls : juce::Component
{
    GlobalControls(juce::AudioProcessorValueTreeState& apvts);

    void paint(juce::Graphics& g) override;

    void resized() override;
private:
    using RSWL = RotarySliderWithLabels;
    std::unique_ptr<RSWL>  inGainSlider, lowMidXoverSlider, midHighXoverSlider, outGainSlider;

    using Attachment = juce::AudioProcessorValueTreeState::SliderAttachment;
    std::unique_ptr<Attachment> lowMidXoverSliderAttachment,
        midHighXoverAttachment,
        inGainSliderAttachment,
        outGainSliderAttachment;
};