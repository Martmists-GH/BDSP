#include "Dpr/Battle/Logic/MainModule.h"

bool expShare(Dpr::Battle::Logic::MainModule *mainModule) {
    return false;
}

const float shinyChance = 1.f/4;

bool shinyPatch(uint32_t id,uint32_t rnd) {
    uint32_t v1 = (id & 0xffff) ^ ((id >> 0x10) & 0xffff);
    uint32_t v2 = (rnd & 0xffff) ^ ((rnd >> 0x10) & 0xffff);
    uint32_t n = (int)(0xffff * shinyChance);

    return ((v1 ^ v2) & 0xffff) < n;
}

uint32_t shinyPatch2(uint32_t id,uint32_t rnd) {
    uint32_t v1 = (id & 0xffff) ^ ((id >> 0x10) & 0xffff);
    uint32_t v2 = (rnd & 0xffff) ^ ((rnd >> 0x10) & 0xffff);
    uint32_t n = (int)(0xffff * shinyChance);
    uint32_t res = (v1 ^ v2) & 0xffff;

    return (res >= n) * res;
}

uint32_t shinyPatch3(uint32_t id, uint32_t rnd) {
    uint32_t v1 = (id & 0xffff) ^ ((id >> 0x10) & 0xffff);
    uint32_t v2 = (rnd & 0xffff) ^ ((rnd >> 0x10) & 0xffff);
    uint32_t n = (int)(0xffff * shinyChance);

    return ((v1 ^ v2) & 0xffff) < n;
}