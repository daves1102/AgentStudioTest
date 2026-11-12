from aurora_portal.quota import Quota, exceeded, remaining


def test_remaining():
    limit = Quota(10, 20, 51200, 20)
    used = Quota(2, 4, 8192, 3)
    left = remaining(limit, used)
    assert left.instances == 8
    assert left.vcpus == 16


def test_exceeded():
    limit = Quota(1, 2, 1024, 1)
    used = Quota(2, 1, 512, 1)
    assert exceeded(limit, used)
