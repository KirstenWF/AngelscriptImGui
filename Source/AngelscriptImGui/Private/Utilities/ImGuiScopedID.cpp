// Copyright Envar Games AB. All Rights Reserved.

#include "ImGuiScopedID.h"

#include "ImGuiUtilities.h"

FImGuiScopedID::FImGuiScopedID(const FString& StringID)
{
	ImGui::PushID(StringCast<ANSICHAR>(*StringID).Get());
	bHasPushedID = true;
}

FImGuiScopedID::FImGuiScopedID(const int IntID)
{
	ImGui::PushID(IntID);
	bHasPushedID = true;
}

FImGuiScopedID::~FImGuiScopedID()
{
	if (bHasPushedID)
		ImGui::PopID();
}
