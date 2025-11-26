#include "Prerequisites.h"
#include "GameProgrammingPatterns/Facade/AudioFacade.h"

int main() {
  AudioFacade audio;

  audio.initialize();
  audio.playBackgroundMusic("assets/music/menu_theme.ogg");
  audio.playSfx("assets/sfx/jump.wav");
  audio.setMasterVolume(0.5f);
  audio.enableReverb(false);

	return 0;
}