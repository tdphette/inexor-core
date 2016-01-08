/// @file fl_playsound.h
/// @author Johannes Schneider
/// @brief This game engine function plays a sound by its sound id

#ifndef INEXOR_VSCRIPT_PLAYSOUND_HEADER
#define INEXOR_VSCRIPT_PLAYSOUND_HEADER

#include "inexor/flowgraph/nodebase/fl_base.hpp"

namespace inexor {
namespace vscript {

    class CFunctionPlaysoundNode : public CScriptNode
    {
        protected:

            //int playsound(int n, const vec *loc, extentity *ent, int flags, int loops, int fade, int chanid, int radius, int expire)
            int sound_id;
            int flags;
            int loops;
            int fade;
            int chanid;
            int radius;
            int expire;

            vec location;
            extentity *ent;

        public:

            CFunctionPlaysoundNode(vec, const char*);
            ~CFunctionPlaysoundNode();

            void in();
            void reset();
    };

};
};

#endif