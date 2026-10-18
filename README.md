# 키루비루 · 건물부수기 웹 버전

2004년 작품 **斬るビル**의 제공된 한글판 리소스와 정적 분석으로 복원한 게임 로직을 사용하는 비공식 웹 이식입니다. 원작 제작자는 **堀内(HORI), Liku, sweet tast**입니다.

[브라우저에서 플레이](https://legerdo.github.io/kirubiru_kor/) · [GitHub 저장소](https://github.com/Legerdo/kirubiru_kor)

`run-web.bat`을 실행하거나 `web` 폴더에서 다음을 실행합니다. Node.js 22.12 이상 또는 24가 필요합니다.

```powershell
npm ci
npm run dev
```

접속 주소는 <http://127.0.0.1:5298/>입니다. `web/run.bat`도 사용할 수 있습니다. 실행·수정·재빌드에 필요한 자료는 `web/` 안에 보존되어 있습니다.

- [실행·조작·개발 안내](web/README.md)
- [이식 근거와 검증 범위](web/PORTING.md)
- [원작 출처](web/public/SOURCES.md)
- [권리와 라이선스 범위](web/public/LICENSE.md)
- [외부 라이브러리 고지](web/public/THIRD_PARTY_NOTICES.md)

게임 하단의 제작자 표기를 누르면 간단한 원작 출처 안내를 볼 수 있습니다. 안내 페이지와 라이브러리 라이선스 전문은 정적 빌드에도 포함됩니다.

`main` 브랜치에 변경 사항을 올리면 GitHub Actions가 테스트, 리소스·리플레이 검증, 빌드를 실행하고 통과한 `web/dist/`를 Pages에 자동 배포합니다. 게임 로직을 수정할 때는 `web/README.md`의 WASM 재빌드 절차를 먼저 수행합니다.

원작의 웹 이식·리소스 재배포 허락은 확인되지 않았습니다. 저장소 전체에 오픈소스 라이선스를 부여하지 않으며, 무료 배포 기록이나 출처 표기가 이용 허락을 대신하지 않습니다.
