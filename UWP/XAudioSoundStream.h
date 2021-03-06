#pragma once

#include "Common/CommonWindows.h"
#include "Core/Config.h"
#include "Windows/DSoundStream.h"

// Factory
WindowsAudioBackend *CreateAudioBackend(AudioBackendType type);
