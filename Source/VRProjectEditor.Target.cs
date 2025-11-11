// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class VRProjectEditorTarget : TargetRules
{
    public VRProjectEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;

        // PDBファイルを生成する設定を追加
        bUsePDBFiles = true;

        // Unity Buildを無効化（必要に応じて）
        bUseUnityBuild = false;

        ExtraModuleNames.AddRange(new string[] { "VRProject" });
    }
}