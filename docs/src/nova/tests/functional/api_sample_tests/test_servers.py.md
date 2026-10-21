# src/nova/tests/functional/api_sample_tests/test_servers.py

## Overview

This file implements the `test_servers` module, defining 41 classs, 23 constants, 82 fields, 2 functions, 79 methods, 9 imports, 23 side effects, 23 security surface entries.

Lines: total 1210, code 935, comment 77, blank 198

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L28–L28` |
| `ServersSampleBase` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L31–L101` |
| `ServersSampleBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L32–L32` |
| `ServersSampleBase.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L33–L33` |
| `ServersSampleBase.user_data_contents` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L35–L35` |
| `ServersSampleBase.user_data` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L36–L36` |
| `ServersSampleBase.common_req_names` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L38–L42` |
| `ServersSampleBase._get_request_name` | method | (self, use_common, sample_name=None) | private | `sample_name or 'server-create-req'` (src/nova/tests/functional/api_sample_tests/test_servers.py:L46); `name` (src/nova/tests/functional/api_sample_tests/test_servers.py:L52) | 6/8 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L44–L52` |
| `ServersSampleBase._post_server` | method | (self, use_common_server_api_samples=True, name=None, extra_subs=None, sample_name=None) | private | `status` (src/nova/tests/functional/api_sample_tests/test_servers.py:L95) | 5/30 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L54–L97` |
| `ServersSampleBase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L99–L101` |
| `ServersSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L104–L161` |
| `ServersSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L107–L107` |
| `ServersSampleJsonTest.use_common_server_post` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L110–L110` |
| `ServersSampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L111–L111` |
| `ServersSampleJsonTest.test_servers_post` | method | (self) | public | `self._post_server( use_common_server_api_samples=self.use_common_server_post)` (src/nova/tests/functional/api_sample_tests/test_servers.py:L114) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L113–L115` |
| `ServersSampleJsonTest.test_servers_get` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L117–L135` |
| `ServersSampleJsonTest.test_servers_list` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L137–L141` |
| `ServersSampleJsonTest.test_servers_details` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L143–L161` |
| `ServersSampleJson23Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L164–L166` |
| `ServersSampleJson23Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L165–L165` |
| `ServersSampleJson23Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L166–L166` |
| `ServersSampleJson29Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L169–L174` |
| `ServersSampleJson29Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L170–L170` |
| `ServersSampleJson29Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L174–L174` |
| `ServersSampleJson216Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L177–L179` |
| `ServersSampleJson216Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L178–L178` |
| `ServersSampleJson216Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L179–L179` |
| `ServersSampleJson219Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L182–L199` |
| `ServersSampleJson219Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L183–L183` |
| `ServersSampleJson219Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L184–L184` |
| `ServersSampleJson219Test.test_servers_post` | method | (self) | public | `self._post_server(False)` (src/nova/tests/functional/api_sample_tests/test_servers.py:L187) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L186–L187` |
| `ServersSampleJson219Test.test_servers_put` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L189–L199` |
| `ServersSampleJson232Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L202–L208` |
| `ServersSampleJson232Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L203–L203` |
| `ServersSampleJson232Test.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L204–L204` |
| `ServersSampleJson232Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L205–L205` |
| `ServersSampleJson232Test.test_servers_post` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L207–L208` |
| `ServersSampleJson237Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L211–L217` |
| `ServersSampleJson237Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L212–L212` |
| `ServersSampleJson237Test.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L213–L213` |
| `ServersSampleJson237Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L214–L214` |
| `ServersSampleJson237Test.test_servers_post` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L216–L217` |
| `ServersSampleJson242Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L220–L226` |
| `ServersSampleJson242Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L221–L221` |
| `ServersSampleJson242Test.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L222–L222` |
| `ServersSampleJson242Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L223–L223` |
| `ServersSampleJson242Test.test_servers_post` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L225–L226` |
| `ServersSampleJson247Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L229–L249` |
| `ServersSampleJson247Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L230–L230` |
| `ServersSampleJson247Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L231–L231` |
| `ServersSampleJson247Test.use_common_server_post` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L232–L232` |
| `ServersSampleJson247Test.test_server_rebuild` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L234–L249` |
| `ServersSampleJson252Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L252–L255` |
| `ServersSampleJson252Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L253–L253` |
| `ServersSampleJson252Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L254–L254` |
| `ServersSampleJson252Test.use_common_server_post` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L255–L255` |
| `ServersSampleJson263Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L258–L324` |
| `ServersSampleJson263Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L261–L261` |
| `ServersSampleJson263Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L262–L262` |
| `ServersSampleJson263Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L263–L263` |
| `ServersSampleJson263Test.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L265–L276` |
| `ServersSampleJson263Test.test_servers_post` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L278–L279` |
| `ServersSampleJson263Test.test_server_rebuild` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L281–L302` |
| `ServersSampleJson263Test.test_servers_details` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L304–L309` |
| `ServersSampleJson263Test.test_server_get` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L311–L316` |
| `ServersSampleJson263Test.test_server_update` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L318–L324` |
| `ServersSampleJson266Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L327–L367` |
| `ServersSampleJson266Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L330–L330` |
| `ServersSampleJson266Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L331–L331` |
| `ServersSampleJson266Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L332–L332` |
| `ServersSampleJson266Test.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L334–L345` |
| `ServersSampleJson266Test.test_get_servers_list_with_changes_before` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L347–L356` |
| `ServersSampleJson266Test.test_get_servers_detail_with_changes_before` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L358–L367` |
| `ServersSampleJson267Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L370–L379` |
| `ServersSampleJson267Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L371–L371` |
| `ServersSampleJson267Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L372–L372` |
| `ServersSampleJson267Test.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L374–L376` |
| `ServersSampleJson267Test.test_servers_post` | method | (self) | public | `self._post_server(use_common_server_api_samples=False)` (src/nova/tests/functional/api_sample_tests/test_servers.py:L379) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L378–L379` |
| `ServersSampleJson269Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L382–L429` |
| `ServersSampleJson269Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L385–L385` |
| `ServersSampleJson269Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L386–L386` |
| `ServersSampleJson269Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L387–L387` |
| `ServersSampleJson269Test.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L389–L408` |
| `ServersSampleJson269Test.setUp._fake_instancemapping_get_by_cell_and_project` | function | (*args, **kwargs) | private | `[{ 'id': 1, 'updated_at': None, 'created_at': None, 'instance_uuid': utils_fixture.uuidsentinel.inst, 'cell_id': 1, 'project_id': "6f70656e737461636b20342065766572", 'cell_mapping': cell_fixture._fake` (src/nova/tests/functional/api_sample_tests/test_servers.py:L395) | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L392–L404` |
| `ServersSampleJson269Test.test_servers_list_from_down_cells` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L410–L415` |
| `ServersSampleJson269Test.test_servers_details_from_down_cells` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L417–L422` |
| `ServersSampleJson269Test.test_server_get_from_down_cells` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L424–L429` |
| `ServersSampleJson271Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L432–L523` |
| `ServersSampleJson271Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L435–L435` |
| `ServersSampleJson271Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L436–L436` |
| `ServersSampleJson271Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L437–L437` |
| `ServersSampleJson271Test.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L439–L457` |
| `ServersSampleJson271Test._test_servers_post` | method | (self) | private | `self._post_server( use_common_server_api_samples=False, extra_subs={'sg_uuid': self.sg_uuid})` (src/nova/tests/functional/api_sample_tests/test_servers.py:L460) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L459–L462` |
| `ServersSampleJson271Test.test_servers_get_with_server_group` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L464–L469` |
| `ServersSampleJson271Test.test_servers_update_with_server_groups` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L471–L477` |
| `ServersSampleJson271Test.test_servers_rebuild_with_server_groups` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L479–L497` |
| `ServersSampleJson271Test.test_server_get_from_down_cells` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L499–L523` |
| `ServersSampleJson271Test.test_server_get_from_down_cells._fake_instancemapping_get_by_cell_and_project` | function | (*args, **kwargs) | private | `[{ 'id': 1, 'updated_at': None, 'created_at': None, 'instance_uuid': utils_fixture.uuidsentinel.inst, 'cell_id': 1, 'project_id': "6f70656e737461636b20342065766572", 'cell_mapping': cell_fixture._fake` (src/nova/tests/functional/api_sample_tests/test_servers.py:L503) | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L500–L512` |
| `ServersSampleJson273Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L526–L578` |
| `ServersSampleJson273Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L529–L529` |
| `ServersSampleJson273Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L530–L530` |
| `ServersSampleJson273Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L531–L531` |
| `ServersSampleJson273Test._post_server_and_lock` | method | (self) | private | `uuid` (src/nova/tests/functional/api_sample_tests/test_servers.py:L539) | 1/7 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L533–L539` |
| `ServersSampleJson273Test.test_servers_details_with_locked_reason` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L541–L545` |
| `ServersSampleJson273Test.test_server_get_with_locked_reason` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L547–L551` |
| `ServersSampleJson273Test.test_server_rebuild_with_empty_locked_reason` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L553–L568` |
| `ServersSampleJson273Test.test_update_server_with_empty_locked_reason` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L570–L578` |
| `ServersSampleJson274Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L581–L609` |
| `ServersSampleJson274Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L587–L587` |
| `ServersSampleJson274Test.SUPPORTS_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L588–L588` |
| `ServersSampleJson274Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L589–L589` |
| `ServersSampleJson274Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L590–L590` |
| `ServersSampleJson274Test.availability_zones` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L594–L594` |
| `ServersSampleJson274Test._setup_compute_service` | method | (self) | private | `self.start_service('compute', host='openstack-node-01')` (src/nova/tests/functional/api_sample_tests/test_servers.py:L597) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L596–L597` |
| `ServersSampleJson274Test.test_servers_post_with_only_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L599–L601` |
| `ServersSampleJson274Test.test_servers_post_with_only_node` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L603–L605` |
| `ServersSampleJson274Test.test_servers_post_with_host_and_node` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L607–L609` |
| `ServersSampleJson290Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L612–L618` |
| `ServersSampleJson290Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L613–L613` |
| `ServersSampleJson290Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L614–L614` |
| `ServersSampleJson290Test.use_common_server_post` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L615–L615` |
| `ServersSampleJson290Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L618–L618` |
| `ServersSampleJson294Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L621–L625` |
| `ServersSampleJson294Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L622–L622` |
| `ServersSampleJson294Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L623–L623` |
| `ServersSampleJson294Test.use_common_server_post` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L624–L624` |
| `ServersSampleJson294Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L625–L625` |
| `ServersSampleJson296Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L628–L665` |
| `ServersSampleJson296Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L629–L629` |
| `ServersSampleJson296Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L630–L630` |
| `ServersSampleJson296Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L631–L631` |
| `ServersSampleJson296Test.test_server_rebuild` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L633–L654` |
| `ServersSampleJson296Test.test_update_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L656–L665` |
| `ServerSampleJson298Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L668–L705` |
| `ServerSampleJson298Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L669–L669` |
| `ServerSampleJson298Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L670–L670` |
| `ServerSampleJson298Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L671–L671` |
| `ServerSampleJson298Test.test_server_rebuild` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L673–L694` |
| `ServerSampleJson298Test.test_update_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L696–L705` |
| `ServersSampleJson2100Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L708–L746` |
| `ServersSampleJson2100Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L709–L709` |
| `ServersSampleJson2100Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L710–L710` |
| `ServersSampleJson2100Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L711–L711` |
| `ServersSampleJson2100Test.use_common_server_post` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L712–L712` |
| `ServersSampleJson2100Test.test_server_rebuild` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L714–L735` |
| `ServersSampleJson2100Test.test_update_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L737–L746` |
| `ServersUpdateSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L749–L763` |
| `ServersUpdateSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L753–L753` |
| `ServersUpdateSampleJsonTest.test_update_server` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L755–L763` |
| `ServersUpdateSampleJson247Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L766–L768` |
| `ServersUpdateSampleJson247Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L767–L767` |
| `ServersUpdateSampleJson247Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L768–L768` |
| `ServersUpdateSampleJson275Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L771–L790` |
| `ServersUpdateSampleJson275Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L772–L772` |
| `ServersUpdateSampleJson275Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L773–L773` |
| `ServersUpdateSampleJson275Test.test_server_rebuild` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L775–L790` |
| `ServersUpdateSampleJson290Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L793–L830` |
| `ServersUpdateSampleJson290Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L794–L794` |
| `ServersUpdateSampleJson290Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L795–L795` |
| `ServersUpdateSampleJson290Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L798–L798` |
| `ServersUpdateSampleJson290Test.test_update_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L800–L809` |
| `ServersUpdateSampleJson290Test.test_server_rebuild` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L811–L830` |
| `ServersUpdateSampleJson294Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L833–L868` |
| `ServersUpdateSampleJson294Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L834–L834` |
| `ServersUpdateSampleJson294Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L835–L835` |
| `ServersUpdateSampleJson294Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L836–L836` |
| `ServersUpdateSampleJson294Test.test_update_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L838–L847` |
| `ServersUpdateSampleJson294Test.test_server_rebuild` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L849–L868` |
| `ServersUpdateSampleJson2104Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L871–L884` |
| `ServersUpdateSampleJson2104Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L872–L872` |
| `ServersUpdateSampleJson2104Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L873–L873` |
| `ServersUpdateSampleJson2104Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L874–L874` |
| `ServersUpdateSampleJson2104Test.test_update_server` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L876–L884` |
| `ServerSortKeysJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L887–L894` |
| `ServerSortKeysJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L888–L888` |
| `ServerSortKeysJsonTests.test_servers_list` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L890–L894` |
| `_ServersActionsJsonTestMixin` | class | — | unexported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L897–L911` |
| `_ServersActionsJsonTestMixin._test_server_action` | method | (self, uuid, action, req_tpl, subs=None, resp_tpl=None, code=202) | private | `response` (src/nova/tests/functional/api_sample_tests/test_servers.py:L911) | 3/14 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L898–L911` |
| `ServersActionsJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L914–L1038` |
| `ServersActionsJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L917–L917` |
| `ServersActionsJsonTest.SUPPORTS_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L918–L918` |
| `ServersActionsJsonTest.test_server_reboot_hard` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L920–L924` |
| `ServersActionsJsonTest.test_server_reboot_soft` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L926–L930` |
| `ServersActionsJsonTest.test_server_rebuild` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L932–L947` |
| `ServersActionsJsonTest.test_server_resize` | method | (self) | public | `uuid` (src/nova/tests/functional/api_sample_tests/test_servers.py:L956) | 1/8 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L949–L956` |
| `ServersActionsJsonTest.test_server_revert_resize` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L958–L961` |
| `ServersActionsJsonTest.test_server_confirm_resize` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L963–L967` |
| `ServersActionsJsonTest._wait_for_active_server` | method | (self, uuid) | private | `server` (src/nova/tests/functional/api_sample_tests/test_servers.py:L985) | 4/12 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L969–L985` |
| `ServersActionsJsonTest.test_server_add_floating_ip` | method | (self) | public | not declared | 6/23 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L987–L1015` |
| `ServersActionsJsonTest.test_server_remove_floating_ip` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1017–L1038` |
| `ServersActionsJson219Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1041–L1064` |
| `ServersActionsJson219Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1044–L1044` |
| `ServersActionsJson219Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1045–L1045` |
| `ServersActionsJson219Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1046–L1046` |
| `ServersActionsJson219Test.test_server_rebuild` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1048–L1064` |
| `ServersActionsJson226Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1067–L1098` |
| `ServersActionsJson226Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1070–L1070` |
| `ServersActionsJson226Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1071–L1071` |
| `ServersActionsJson226Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1072–L1072` |
| `ServersActionsJson226Test.test_server_rebuild` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1074–L1098` |
| `ServersActionsJson254Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1101–L1130` |
| `ServersActionsJson254Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1104–L1104` |
| `ServersActionsJson254Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1105–L1105` |
| `ServersActionsJson254Test.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1106–L1106` |
| `ServersActionsJson254Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1107–L1107` |
| `ServersActionsJson254Test._create_server` | method | (self) | private | `self._post_server()` (src/nova/tests/functional/api_sample_tests/test_servers.py:L1110) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1109–L1110` |
| `ServersActionsJson254Test.test_server_rebuild` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1112–L1130` |
| `ServersActionsJson257Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1133–L1139` |
| `ServersActionsJson257Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1135–L1135` |
| `ServersActionsJson257Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1136–L1136` |
| `ServersActionsJson257Test._create_server` | method | (self) | private | `self._post_server(use_common_server_api_samples=False)` (src/nova/tests/functional/api_sample_tests/test_servers.py:L1139) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1138–L1139` |
| `ServersCreateImageJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1142–L1154` |
| `ServersCreateImageJsonTest.test_server_create_image` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1146–L1154` |
| `ServersCreateImageJsonTestv2_45` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1157–L1168` |
| `ServersCreateImageJsonTestv2_45.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1159–L1159` |
| `ServersCreateImageJsonTestv2_45.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1160–L1160` |
| `ServersCreateImageJsonTestv2_45.test_server_create_image` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1162–L1168` |
| `ServerStartStopJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1171–L1187` |
| `ServerStartStopJsonTest._test_server_action` | method | (self, uuid, action, req_tpl) | private | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1173–L1178` |
| `ServerStartStopJsonTest.test_server_start` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1180–L1183` |
| `ServerStartStopJsonTest.test_server_stop` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1185–L1187` |
| `ServersSampleMultiStatusJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1190–L1196` |
| `ServersSampleMultiStatusJsonTest.test_servers_list` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1192–L1196` |
| `ServerTriggerCrashDumpJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1199–L1210` |
| `ServerTriggerCrashDumpJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1200–L1200` |
| `ServerTriggerCrashDumpJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1201–L1201` |
| `ServerTriggerCrashDumpJsonTest.test_trigger_crash_dump` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_servers.py:L1203–L1210` |

## Dependencies

- `import base64` (src/nova/tests/functional/api_sample_tests/test_servers.py:L16)
- `import time` (src/nova/tests/functional/api_sample_tests/test_servers.py:L17)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/functional/api_sample_tests/test_servers.py:L19)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/api_sample_tests/test_servers.py:L20)
- `nova.api.openstack`: imports `api_version_request as avr` (src/nova/tests/functional/api_sample_tests/test_servers.py:L22)
- `import nova.conf` (src/nova/tests/functional/api_sample_tests/test_servers.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/api_sample_tests/test_servers.py:L24)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_servers.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/functional/api_sample_tests/test_servers.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/api_sample_tests/test_servers.py:L28)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L107)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L261)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L330)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L385)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L435)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L529)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L587)
- **global-mutation**: SUPPORTS_CELLS = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L588)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L618)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L625)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L631)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L671)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L711)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L753)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L798)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L836)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_servers.py:L874)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L917)
- **global-mutation**: SUPPORTS_CELLS = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L918)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L1044)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L1070)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_servers.py:L1104)

## Security Surface

- **sink** (`db-write`): subs.update(extra_subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L80)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L323)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L324)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L476)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L477)
- **sink** (`db-write`): subs.update(params) (src/nova/tests/functional/api_sample_tests/test_servers.py:L494)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L577)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L578)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L664)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L665)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L704)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L705)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L745)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L746)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L762)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L763)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L808)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L809)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L846)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L847)
- **sink** (`db-write`): 'server-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_servers.py:L883)
- **sink** (`db-write`): self._verify_response('server-update-resp', subs, response, 200) (src/nova/tests/functional/api_sample_tests/test_servers.py:L884)
- **sink** (`db-write`): subs.update({'action': action, (src/nova/tests/functional/api_sample_tests/test_servers.py:L901)

