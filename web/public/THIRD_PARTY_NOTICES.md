# 외부 라이브러리와 도구 고지

실제 설치된 패키지와 Zig 0.13.0 배포본에서 확인한 라이선스입니다. 이 파일과 `licenses/`는 Vite가 정적 산출물 `dist/`에도 그대로 복사합니다. 별도 설명이 없는 한 아래 라이브러리 자체는 수정하지 않았습니다. 게임의 원작 권리는 [LICENSE.md](LICENSE.md)에서 따로 다룹니다.

## 브라우저 실행에 포함되는 라이브러리

| 구성 요소 / 출처 | 버전과 역할 | 라이선스·저작권 고지 |
| --- | --- | --- |
| [Phaser](https://github.com/phaserjs/phaser) | 3.90.0 · 화면 크기, 프레임 루프, 캔버스 표시 | MIT · © 2024 Richard Davey, Phaser Studio Inc. · [전문](licenses/phaser-MIT.txt) |
| [EventEmitter3](https://github.com/primus/eventemitter3) | 5.0.4 · Phaser의 런타임 의존성 | MIT · © 2014 Arnout Kazemier · [전문](licenses/eventemitter3-MIT.txt) |
| [browser_wasi_shim](https://github.com/bjorn3/browser_wasi_shim) | 0.4.2 · 브라우저 WASI 파일/호스트 연결 | MIT OR Apache-2.0 중 이 배포에서는 MIT 선택 · 패키지 작성자 bjorn3 · [MIT 전문](licenses/browser-wasi-shim-MIT.txt) |
| [WebAudio TinySynth](https://github.com/g200kg/webaudio-tinysynth) | 1.1.3 · 원작 MIDI의 브라우저 합성/재생 | Apache-2.0 · 패키지 작성자 Tatsuya Shinyagaito (g200kg) · [전문](licenses/webaudio-tinysynth-Apache-2.0.txt) |

## WebAssembly 런타임과 컴파일 지원 코드

`game.wasm`은 Zig 0.13.0의 `wasm32-wasi` 대상과 `-lc`로 빌드합니다. 원작에서 복원한 게임 코드에 아래 라이선스를 적용하는 것은 아닙니다.

- [Zig](https://github.com/ziglang/zig), 컴파일 지원 코드: MIT · © Zig contributors · [전문](licenses/zig-MIT.txt).
- [wasi-libc](https://github.com/WebAssembly/wasi-libc): 배포본의 [전체 고지](licenses/wasi-libc-LICENSE.txt), [Apache-2.0 with LLVM Exceptions](licenses/wasi-libc-Apache-LLVM.txt), [Apache-2.0](licenses/wasi-libc-Apache-2.0.txt), [MIT](licenses/wasi-libc-MIT.txt)를 함께 보존합니다.
- wasi-libc에 포함된 [musl](https://musl.libc.org/): MIT 및 개별 기여 고지 · [COPYRIGHT 전문](licenses/musl-COPYRIGHT.txt).
- wasi-libc에 포함된 [cloudlibc](https://github.com/NuxiNL/cloudlibc): BSD-2-Clause · © 2015–2017 Nuxi and contributors · [전문](licenses/cloudlibc-BSD-2-Clause.txt).
- wasi-libc 툴체인에 제공되는 emmalloc: Emscripten Authors의 저작권/라이선스 [원문 고지](licenses/emmalloc-NOTICE.txt). wasi-libc의 전체 고지와 MIT 전문도 위에 함께 보존합니다. 이 목록이 툴체인의 모든 파일이 실제 WASM에 연결되었다는 뜻은 아닙니다.

## 개발·검증 도구

아래 패키지의 실행 파일과 `node_modules/`는 Git에 포함하지 않습니다. 버전은 `package-lock.json`으로 고정합니다. 로컬 Zig 설치 폴더 `.tools/`도 Git에 포함하지 않습니다.

| 도구 / 출처 | 버전 | 라이선스 |
| --- | --- | --- |
| [Vite](https://github.com/vitejs/vite) | 7.1.7 | MIT와 배포본의 외부 코드 고지 · [전문](licenses/vite-LICENSE.txt) |
| [TypeScript](https://github.com/microsoft/TypeScript) | 5.9.3 | Apache-2.0 · [전문](licenses/typescript-Apache-2.0.txt), [외부 고지](licenses/typescript-ThirdPartyNoticeText.txt) |
| [Playwright](https://github.com/microsoft/playwright) | 1.56.1 | Apache-2.0 · [전문](licenses/playwright-Apache-2.0.txt), [NOTICE](licenses/playwright-NOTICE.txt) |

Python, Node.js와 브라우저는 개발 환경에서 별도로 설치하는 도구이며 이 저장소에 배포하지 않습니다. 해당 도구 설치본의 조건을 따릅니다. 실제 브라우저 QA는 `KIRUBIRU_CHROMIUM`으로 Chromium 경로를 지정할 수 있습니다.

각 전문은 해당 설치본에서 바이트 그대로 복사했습니다. emmalloc은 별도 LICENSE 파일 대신 소스 파일 첫머리의 저작권 고지 블록을 보존했습니다. 라이선스 변경·업그레이드 시 실제 배포본과 이 고지를 함께 갱신해야 합니다.
