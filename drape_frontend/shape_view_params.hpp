#pragma once

#include "../drape/color.hpp"

namespace df
{
  enum LineCap
  {
    SquareCap = -1,
    RoundCap  = 0,
    ButtCap   = 1,
  };

  enum LineJoin
  {
    NonJoin   = 0,
    RoundJoin = 1,
    BevelJoin  = 2
  };

  struct LineViewParams
  {
    Color m_color;
    float m_width;
    LineCap m_cap;
    LineJoin m_join;
  };
}
