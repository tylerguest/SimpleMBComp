/*
  ==============================================================================

    CompressorBand.cpp
    Created: 6 Jan 2024 4:09:21pm
    Author:  oktylerguest

  ==============================================================================
*/

#include "CompressorBand.h"

void CompressorBand::prepare(const juce::dsp::ProcessSpec& spec)
{
    compressor.prepare(spec);
}

void CompressorBand::updateCompressorSettings()
{
    compressor.setAttack(attack->get());
    compressor.setRelease(release->get());
    compressor.setThreshold(threshold->get());
    compressor.setRatio(
        ratio->getCurrentChoiceName().getFloatValue());
}

void CompressorBand::process(juce::AudioBuffer<float>& buffer)
{
    auto block = juce::dsp::AudioBlock<float>(buffer);
    auto context =
        juce::dsp::ProcessContextReplacing<float>(block);

    context.isBypassed = bypassed->get();

    compressor.process(context);
}