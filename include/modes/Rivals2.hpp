#ifndef _MODES_RIVALS_2_HPP
#define _MODES_RIVALS_2_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class Rivals2 : public ControllerMode {
  public:
    Rivals2(socd::SocdType socd_type);
    bool isMelee();

  private:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif
