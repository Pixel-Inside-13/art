; Copyright (C) 2022 The Android Open Source Project
;
; Licensed under the Apache License, Version 2.0 (the "License");
; you may not use this file except in compliance with the License.
; You may obtain a copy of the License at
;
;      http://www.apache.org/licenses/LICENSE-2.0
;
; Unless required by applicable law or agreed to in writing, software
; distributed under the License is distributed on an "AS IS" BASIS,
; WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
; See the License for the specific language governing permissions and
; limitations under the License.

.class                   public SubClass2
.super                   SuperClass
.implements              Interface

.method                  public <init>()V
   .limit stack          1
   .limit locals         1
   aload_0
   invokespecial         SuperClass/<init>()V
   return
.end method

.method                  foo()Ljava/lang/Class;
   .limit stack          1
   .limit locals         1
   ; jasmin does not support ldc with a class, so just return null for the
   ; purpose of this test.
   aconst_null
   areturn
.end method

