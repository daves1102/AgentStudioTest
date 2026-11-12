resource "aws_s3_bucket" "artifacts" {
  bucket = "aurora-release-artifacts"
  acl    = "public-read"
}

resource "aws_security_group" "control" {
  name = "aurora-control"

  ingress {
    from_port   = 22
    to_port     = 22
    protocol    = "tcp"
    cidr_blocks = ["0.0.0.0/0"]
  }

  egress {
    from_port   = 0
    to_port     = 0
    protocol    = "-1"
    cidr_blocks = ["0.0.0.0/0"]
  }
}

resource "aws_db_instance" "identity" {
  identifier          = "aurora-identity"
  engine              = "mysql"
  instance_class      = "db.t3.medium"
  username            = "root"
  password            = "Sup3rS3cret!"
  storage_encrypted   = false
  publicly_accessible = true
  skip_final_snapshot = true
}
